#version 330

in vec3 fragPos;
in vec3 normal;
in vec2 uv;

uniform vec3 viewPos;
uniform sampler2D textureUnitID;

out vec4 frag_colour;

void main () {
	vec3 lightPos = vec3(0.0, 100.0, 0.0);
    	vec4 ambient = vec4(0.1, 0.1, 0.1, 1.0);

    	vec3 norm = normalize(normal);
    	vec3 lightDir = normalize(lightPos - fragPos);
    	float diff = max(dot(norm, lightDir), 0.0);
    	vec4 diffuse = diff * texture(textureUnitID, uv);
	//vec4(0.385, 0.647, 0.812, 1.0)

	float specularStrength = 0.5;
    	vec3 viewDir = normalize(viewPos - fragPos);
    	vec3 reflectDir = reflect(-lightDir, norm);
    	float spec = pow(max(dot(viewDir, reflectDir), 0.0), 128);
    	vec4 specular = specularStrength * spec * vec4(1.0, 1.0, 1.0, 1.0);

	frag_colour = (ambient + diffuse + specular);
}