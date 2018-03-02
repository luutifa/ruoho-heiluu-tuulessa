#pragma once

#include "sync.h" // rocket
#include "music_player.h"
#include <unordered_map>
#include "gl_headers.h"
#include "shader_quad.h"
#include "framebuffer.h"

class Grass; // grass.h

class Demo {
  public:
    Demo(sync_device *rocket, MusicPlayer const &player, int w, int h);
    ~Demo();
    double get(std::string track);
    void render();
    GLint getUniformLocation(std::string const &name);

  private:
    sync_device *m_rocket;
    MusicPlayer const &m_player;
    double m_t;
    glm::mat4 m_projection;
    // Likely faster to cache tracks to a map as sync_get_track only iterates.
    std::unordered_map<std::string, sync_track const *> m_tracks;

    // G-Buf shader and ufms
    GLuint m_gBufferShaderProgram;
    GLint m_uTexDiffuse;
    GLint m_uTexSpecular;
    GLint m_uProjection;
    GLint m_uView;

    // FBOs
    Framebuffer m_gBuffer;

    // Lighting and post pass
    ShaderQuad m_lightingPass;

    // Visual components
    Grass *m_grass;
};
