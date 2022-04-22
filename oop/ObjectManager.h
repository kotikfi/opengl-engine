#pragma once
#define _CRTDBG_MAP_ALLOC

#include <vector>
#include "ObjectFactory.h"
#include "AbstractModel.h"
#include "AbstractObject.h"
#include "SuziFlat.h"
#include "Types.h"
//#include "Camera.h"


#include <crtdbg.h>


#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW


class ObjectManager
{
private:
	ObjectManager();

	std::vector<AbstractModel*> models;
	std::vector<AbstractObject*> suzisFlat;
	std::vector<AbstractObject*> plains;
	std::vector<AbstractObject*> spheres;
	std::vector<AbstractObject*> skyboxes;
	std::vector<AbstractObject*> houses;
	std::vector<AbstractObject*> terrains;
	std::vector<AbstractObject*> trees;
	std::vector<AbstractObject*> zombies;
	std::vector<AbstractObject*> concreteGrounds;

public:
	static ObjectManager& getInstance(); // Thread-safe singleton

	// delete copy and move constructors and assign operators
	ObjectManager(ObjectManager const&) = delete;             // Copy construct
	ObjectManager(ObjectManager&&) = delete;                  // Move construct
	ObjectManager& operator=(ObjectManager const&) = delete;  // Copy assign
	ObjectManager& operator=(ObjectManager&&) = delete;      // Move assign

	void addModel(AbstractModel* model);
	void addObject(AbstractObject* object, Types::ObjType type);

	AbstractModel* getModel(unsigned int id);
	AbstractObject* getObject(unsigned int id, Types::ObjType type);

	unsigned int getObjectCount(Types::ObjType type);

	void destroy();
};

