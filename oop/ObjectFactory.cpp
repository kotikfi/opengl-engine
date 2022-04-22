#include "ObjectFactory.h"


ObjectFactory::ObjectFactory(std::vector<Shader*>& shaders)
{
	modelSuziFlat = new ModelSuziFlat(shaders[1]);
	modelPlain = new ModelPlain(shaders[0]);
	modelSphere = new ModelSphere(shaders[1]);
	modelSkybox = new ModelSkybox(shaders[2]);
	modelHouse = new ModelHouse(shaders[0]);
	modelTerrain = new ModelTerrain(shaders[0]);
	modelTree = new ModelTree(shaders[0]);
	modelZombie = new ModelZombie(shaders[0]);
	modelConcreteGround = new ModelConcreteGround(shaders[0]);

	(&ObjectManager::getInstance())->addModel(modelSuziFlat);
	(&ObjectManager::getInstance())->addModel(modelPlain);
	(&ObjectManager::getInstance())->addModel(modelSphere);
	(&ObjectManager::getInstance())->addModel(modelSkybox);
	(&ObjectManager::getInstance())->addModel(modelHouse);
	(&ObjectManager::getInstance())->addModel(modelTerrain);
	(&ObjectManager::getInstance())->addModel(modelTree);
	(&ObjectManager::getInstance())->addModel(modelZombie);
	(&ObjectManager::getInstance())->addModel(modelConcreteGround);
}

void ObjectFactory::createObject(Types::ObjType type, glm::vec3 pos)
{
	switch (type)
	{
		case Types::ObjType::OBJ_SUZI_FLAT:
		{
			SuziFlat* suziFlat = new SuziFlat(modelSuziFlat, pos);
			(&ObjectManager::getInstance())->addObject(suziFlat, Types::ObjType::OBJ_SUZI_FLAT);
			break;
		}
		case Types::ObjType::OBJ_PLAIN:
		{
			Plain* plain = new Plain(modelPlain, pos);
			(&ObjectManager::getInstance())->addObject(plain, Types::ObjType::OBJ_PLAIN);
			break;
		}
		case Types::ObjType::OBJ_SPHERE:
		{
			Sphere* sphere = new Sphere(modelSphere, pos);
			(&ObjectManager::getInstance())->addObject(sphere, Types::ObjType::OBJ_SPHERE);
			break;
		}
		case Types::ObjType::OBJ_SKYBOX:
		{
			Skybox* skybox = new Skybox(modelSkybox, pos);
			(&ObjectManager::getInstance())->addObject(skybox, Types::ObjType::OBJ_SKYBOX);
			break;
		}
		case Types::ObjType::OBJ_HOUSE:
		{
			House* house = new House(modelHouse, pos);
			(&ObjectManager::getInstance())->addObject(house, Types::ObjType::OBJ_HOUSE);
			break;
		}
		case Types::ObjType::OBJ_TERRAIN:
		{
			Terrain* terrain = new Terrain(modelTerrain, pos);
			(&ObjectManager::getInstance())->addObject(terrain, Types::ObjType::OBJ_TERRAIN);
			break;
		}
		case Types::ObjType::OBJ_TREE:
		{
			Tree* tree = new Tree(modelTree, pos);
			(&ObjectManager::getInstance())->addObject(tree, Types::ObjType::OBJ_TREE);
			break;
		}
		case Types::ObjType::OBJ_ZOMBIE:
		{
			Zombie* zombie = new Zombie(modelZombie, pos);
			(&ObjectManager::getInstance())->addObject(zombie, Types::ObjType::OBJ_ZOMBIE);
			break;
		}
		case Types::ObjType::OBJ_CONCRETE_GROUND:
		{
			ConcreteGround* concreteGround = new ConcreteGround(modelConcreteGround, pos);
			(&ObjectManager::getInstance())->addObject(concreteGround, Types::ObjType::OBJ_CONCRETE_GROUND);
			break;
		}
	}
}
