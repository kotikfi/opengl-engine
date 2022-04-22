#version 330
layout(location=0) in vec3 vp;
layout(location=1) in vec3 in_normal;

uniform mat4 modelMatrix;
uniform mat4 viewMatrix;
uniform mat4 projectionMatrix;

out vec3 normal;
out vec3 fragPos;

void main () {
     gl_Position = projectionMatrix * viewMatrix * modelMatrix * vec4(vp, 1.0);
     fragPos = vec3(modelMatrix * vec4(vp, 1.0));
     normal = in_normal;
}