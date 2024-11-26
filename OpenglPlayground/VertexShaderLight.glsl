#version 400 core
layout (location = 0) in vec3 pos;
layout (location = 1) in vec3 normalVector;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
uniform mat3 normalMat;

out vec3 normal;
out vec3 FragWorldPos;

void main()
{
    gl_Position = projection * view * model * vec4(pos, 1.0);
    normal = normalMat * normalVector;
    FragWorldPos = vec3(model * vec4(pos, 1.0));
} 