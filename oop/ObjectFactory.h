#pragma once
#define _CRTDBG_MAP_ALLOC

#include <string.h>
#include "ModelSuziFlat.h"
#include "ModelPlain.h"
#include "ModelSphere.h"
#include "ModelSkybox.h"
#include "ModelHouse.h"
#include "ModelTerrain.h"
#include "ModelTree.h"
#include "ModelZombie.h"
#include "ModelConcreteGround.h"
#include "SuziFlat.h"
#include "Plain.h"
#include "Sphere.h"
#include "Skybox.h"
#include "House.h"
#include "Terrain.h"
#include "Tree.h"
#include "Zombie.h"
#include "ConcreteGround.h"
#include "ObjectManager.h"
#include "Types.h"

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class ObjectFactory
{
private:

	ModelSuziFlat* modelSuziFlat;
	ModelPlain* modelPlain;
	ModelSphere* modelSphere;
	ModelSkybox* modelSkybox;
	ModelHouse* modelHouse;
	ModelTerrain* modelTerrain;
	ModelTree* modelTree;
	ModelZombie* modelZombie;
	ModelConcreteGround* modelConcreteGround;



public:
	ObjectFactory(std::vector<Shader*>& shaders);

	void createObject(Types::ObjType type, glm::vec3 pos);
};

