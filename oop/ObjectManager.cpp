#include "ObjectManager.h"

ObjectManager& ObjectManager::getInstance()
{
	static ObjectManager instance;
	
	return instance;
}

void ObjectManager::addModel(AbstractModel* model)
{
	models.push_back(model);
}

void ObjectManager::addObject(AbstractObject* object, Types::ObjType type)
{
	switch (type)
	{
	case Types::ObjType::OBJ_SUZI_FLAT:
		suzisFlat.push_back(object);
		break;
	case Types::ObjType::OBJ_PLAIN:
		plains.push_back(object);
		break;
	case Types::ObjType::OBJ_SPHERE:
		spheres.push_back(object);
		break;
	case Types::ObjType::OBJ_SKYBOX:
		skyboxes.push_back(object);
		break;
	case Types::ObjType::OBJ_HOUSE:
		houses.push_back(object);
		break;
	case Types::ObjType::OBJ_TERRAIN:
		terrains.push_back(object);
		break;
	case Types::ObjType::OBJ_TREE:
		trees.push_back(object);
		break;
	case Types::ObjType::OBJ_ZOMBIE:
		zombies.push_back(object);
		break;
	case Types::ObjType::OBJ_CONCRETE_GROUND:
		concreteGrounds.push_back(object);
		break;
	}
}

AbstractModel* ObjectManager::getModel(unsigned int id)
{
	return models[id];
}

AbstractObject* ObjectManager::getObject(unsigned int id, Types::ObjType type)
{
	switch (type)
	{
	case Types::ObjType::OBJ_SUZI_FLAT:
		return suzisFlat[id];
	case Types::ObjType::OBJ_PLAIN:
		return plains[id];
	case Types::ObjType::OBJ_SPHERE:
		return spheres[id];
	case Types::ObjType::OBJ_SKYBOX:
		return skyboxes[id];
	case Types::ObjType::OBJ_HOUSE:
		return houses[id];
	case Types::ObjType::OBJ_TERRAIN:
		return terrains[id];
	case Types::ObjType::OBJ_TREE:
		return trees[id];
	case Types::ObjType::OBJ_ZOMBIE:
		return zombies[id];
	case Types::ObjType::OBJ_CONCRETE_GROUND:
		return concreteGrounds[id];
	default:
		return nullptr;
	}
}

unsigned int ObjectManager::getObjectCount(Types::ObjType type)
{
	switch (type)
	{
	case Types::ObjType::OBJ_SUZI_FLAT:
		return suzisFlat.size();
	case Types::ObjType::OBJ_PLAIN:
		return plains.size();
	case Types::ObjType::OBJ_SPHERE:
		return spheres.size();
	case Types::ObjType::OBJ_SKYBOX:
		return skyboxes.size();
	case Types::ObjType::OBJ_HOUSE:
		return houses.size();
	case Types::ObjType::OBJ_TERRAIN:
		return terrains.size();
	case Types::ObjType::OBJ_TREE:
		return trees.size();
	case Types::ObjType::OBJ_ZOMBIE:
		return zombies.size();
	case Types::ObjType::OBJ_CONCRETE_GROUND:
		return concreteGrounds.size();
	default:
		return 0;
	}
}



void ObjectManager::destroy()
{
	for (auto i : models)
	{
		delete i;
	}

	for (auto i : suzisFlat)
	{
		delete i;
	}

	for (auto i : plains)
	{
		delete i;
	}

	for (auto i : spheres)
	{
		delete i;
	}
	for (auto i : skyboxes)
	{
		delete i;
	}
	for (auto i : houses)
	{
		delete i;
	}
	for (auto i : terrains)
	{
		delete i;
	}
	for (auto i : trees)
	{
		delete i;
	}
	for (auto i : zombies)
	{
		delete i;
	}
	for (auto i : concreteGrounds)
	{
		delete i;
	}
}

ObjectManager::ObjectManager()
{

}