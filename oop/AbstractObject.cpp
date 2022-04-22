#include "AbstractObject.h"

void AbstractObject::scale(glm::vec3 ratio)
{
	trans = glm::scale(trans, ratio);
}

void AbstractObject::scale(glm::mat4 m, glm::vec3 ratio)
{
}

void AbstractObject::translate(glm::vec3 vec)
{
	pos += vec;
	trans = glm::translate(trans, vec);
	//printf("x: %f y: %f z: %f\n", pos.x, pos.y, pos.z);
}

void AbstractObject::rotate(float angle, glm::vec3 vec)
{
	trans = glm::rotate(trans, glm::radians(angle), vec);
}