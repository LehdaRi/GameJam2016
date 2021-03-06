#version 330 core

layout(location = 0) in vec3 position;

out vec4 pos;
out vec2 uv;

uniform mat4 MVP;
uniform float depth;

void main() {
    pos = MVP * vec4(position.xy, depth, 1.0);
    uv = vec2(position.x, -position.y)*0.5 + 0.5;
    gl_Position = pos;
}
