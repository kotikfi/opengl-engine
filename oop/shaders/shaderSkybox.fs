#version 330
in vec3 fragPos;

out vec4 frag_colour;

uniform samplerCube skybox;

void main () {
	frag_colour = texture(skybox, fragPos);
}