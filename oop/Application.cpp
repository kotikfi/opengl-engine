#include "Application.h"



Application& Application::getInstance()
{
	static Application instance;

	return instance;
}

void Application::createObjects()
{
	//Skybox
	objectFactory->createObject(Types::ObjType::OBJ_SKYBOX, glm::vec3(0.0f));
	objectManager->getObject(0, Types::ObjType::OBJ_SKYBOX)->scale(glm::vec3(2000.0f));

	// Plain
	/*objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(0.0f, -1.0f, 0.0f));
	objectManager->getObject(0, Types::ObjType::OBJ_PLAIN)->scale(glm::vec3(200.0f));*/

	// Terrain
	objectFactory->createObject(Types::ObjType::OBJ_TERRAIN, glm::vec3(0.0f));
	objectManager->getObject(0, Types::ObjType::OBJ_TERRAIN)->scale(glm::vec3(15.0f));

	//Test objects
	/*objectFactory->createObject(Types::ObjType::OBJ_SUZI_FLAT, glm::vec3(0.0f, 0.0f, 5.0f));
	objectManager->getObject(0, Types::ObjType::OBJ_SUZI_FLAT)->scale(glm::vec3(0.4f));
	objectManager->getObject(0, Types::ObjType::OBJ_SUZI_FLAT)->rotate(180.0f, glm::vec3(1.0f, 0.0f, 0.0f));
	objectManager->getObject(0, Types::ObjType::OBJ_SUZI_FLAT)->rotate(180.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_SUZI_FLAT, glm::vec3(-1.0f, 0.0f, 2.0f));

	objectFactory->createObject(Types::ObjType::OBJ_SUZI_FLAT, glm::vec3(1.0f, 0.0f, 2.0f));*/

	//objectFactory->createObject(Types::ObjType::OBJ_SPHERE, glm::vec3(-3.0f, 0.0f, 3.0f));

	//objectFactory->createObject(Types::ObjType::OBJ_SPHERE, glm::vec3(3.0f, 0.0f, 3.0f));

	// Lightning spheres
	objectFactory->createObject(Types::ObjType::OBJ_SPHERE, glm::vec3(-2.0f, 2550.0f, -2.0f));

	objectFactory->createObject(Types::ObjType::OBJ_SPHERE, glm::vec3(2.0f, 2550.0f, -2.0f));

	objectFactory->createObject(Types::ObjType::OBJ_SPHERE, glm::vec3(-2.0f, 2550.0f, 2.0f));

	objectFactory->createObject(Types::ObjType::OBJ_SPHERE, glm::vec3(2.0f, 2550.0f, 2.0f));

	// Houses
	// SIDE 1
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(0.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(30.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(60.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(90.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(120.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-30.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-60.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-90.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-120.0f, 0.0f, -50.0f));

	// SIDE 2
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(0.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(30.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(60.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(90.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(120.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-30.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-60.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-90.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-120.0f, 0.0f, 50.0f));

	// ROUND STREET
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(190.0f, 0.0f, -80.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(40.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(250.0f, 0.0f, -110.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(5.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(320.0f, 0.0f, -100.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(-30.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(370.0f, 0.0f, -40.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(-70.0f, glm::vec3(0.0f, 1.0f, 0.0f));


	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(190.0f, 0.0f, 80.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(-40.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(250.0f, 0.0f, 110.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(-5.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(320.0f, 0.0f, 100.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(30.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(370.0f, 0.0f, 40.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(70.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	// 2nd STREET
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-150.0f, 0.0f, 100.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-150.0f, 0.0f, 130.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-150.0f, 0.0f, 160.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-150.0f, 0.0f, 190.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-150.0f, 0.0f, 220.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-150.0f, 0.0f, 250.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-150.0f, 0.0f, 280.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	// SIDE 2
	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-250.0f, 0.0f, 100.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-250.0f, 0.0f, 130.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-250.0f, 0.0f, 160.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-250.0f, 0.0f, 190.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-250.0f, 0.0f, 220.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-250.0f, 0.0f, 250.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_HOUSE, glm::vec3(-250.0f, 0.0f, 280.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE) - 1, Types::ObjType::OBJ_HOUSE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_HOUSE)->scale(glm::vec3(2.0f));
		/*objectManager->getObject(i, Types::ObjType::OBJ_HOUSE)->scale(glm::vec3(30.0f));
		objectManager->getObject(i, Types::ObjType::OBJ_HOUSE)->translate(glm::vec3(0.0f, 1.0f, 0.0f));*/
	}

	// ROAD
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(120.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(100.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(80.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(60.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(40.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(20.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(0.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-20.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-40.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-60.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-80.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-100.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-120.0f, 0.2f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-140.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-160.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-180.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-220.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-240.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-260.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-280.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-300.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-320.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-340.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-360.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-380.0f, 0.2f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-400.0f, 0.2f, 0.0f));

	// 2nd STREET
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 20.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 40.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 60.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 80.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 100.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 120.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 140.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 160.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 180.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 200.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 220.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 240.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 260.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 280.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, 300.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	// SIDE 2
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, -20.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, -40.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, -60.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, -80.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, -100.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, -120.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, -140.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(-200.0f, 0.15f, -160.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	// ROUND STREET

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(139.0f, 0.21f, -0.8f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(5.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(158.0f, 0.2f, -3.2f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(10.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(175.0f, 0.21f, -8.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(20.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(190.0f, 0.2f, -16.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(35.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(202.0f, 0.21f, -28.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(50.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(214.5f, 0.2f, -42.9f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(50.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(227.0f, 0.21f, -54.5f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(35.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(242.0f, 0.2f, -62.3f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(20.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(258.0f, 0.21f, -65.8f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(5.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(275.0f, 0.2f, -64.8f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-10.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(292.0f, 0.21f, -60.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-20.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(307.3f, 0.2f, -52.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-35.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(320.1f, 0.21f, -40.3f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-50.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(328.0f, 0.2f, -26.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-70.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(331.8f, 0.21f, -9.2f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-85.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	// OTHER SIDE

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(139.0f, 0.19f, 0.8f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-5.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(158.0f, 0.18f, 3.2f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-10.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(175.0f, 0.19f, 8.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-20.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(190.0f, 0.18f, 16.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-35.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(202.0f, 0.19f, 28.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-50.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(214.5f, 0.18f, 42.9f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-50.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(227.0f, 0.19f, 54.5f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-35.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(242.0f, 0.18f, 62.3f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-20.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(258.0f, 0.19f, 65.8f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(-5.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(275.0f, 0.18f, 64.8f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(10.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(292.0f, 0.19f, 60.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(20.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(307.3f, 0.18f, 52.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(35.0f, glm::vec3(0.0f, 1.0f, 0.0f));
																			   
	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(320.1f, 0.19f, 40.3f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(50.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(328.0f, 0.18f, 26.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(70.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	objectFactory->createObject(Types::ObjType::OBJ_PLAIN, glm::vec3(331.8f, 0.19f, 9.2f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN) - 1, Types::ObjType::OBJ_PLAIN)->rotate(85.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_PLAIN)->scale(glm::vec3(10.0f));
	}

	// MIDDLE CONCRETE GROUND
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(180.8f, 0.15f, 0.0f));
																						 
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(200.8f, 0.15f, -20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(200.8f, 0.15f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(200.8f, 0.15f, 20.0f));
																						 
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(220.8f, 0.15f, -40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(220.8f, 0.15f, -20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(220.8f, 0.15f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(220.8f, 0.15f, 20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(220.8f, 0.15f, 40.0f));
																						 
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(240.8f, 0.15f, -60.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(240.8f, 0.15f, -40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(240.8f, 0.15f, -20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(240.8f, 0.15f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(240.8f, 0.15f, 20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(240.8f, 0.15f, 40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(240.8f, 0.15f, 60.0f));
																						 
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(260.8f, 0.15f, -60.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(260.8f, 0.15f, -40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(260.8f, 0.15f, -20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(260.8f, 0.15f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(260.8f, 0.15f, 20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(260.8f, 0.15f, 40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(260.8f, 0.15f, 60.0f));
																						 
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(280.8f, 0.15f, -60.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(280.8f, 0.15f, -40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(280.8f, 0.15f, -20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(280.8f, 0.15f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(280.8f, 0.15f, 20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(280.8f, 0.15f, 40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(280.8f, 0.15f, 60.0f));
																					
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(300.8f, 0.15f, -40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(300.8f, 0.15f, -20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(300.8f, 0.15f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(300.8f, 0.15f, 20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(300.8f, 0.15f, 40.0f));
																						 
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(315.8f, 0.15f, -40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(315.8f, 0.15f, -20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(315.8f, 0.15f, 0.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(315.8f, 0.15f, 20.0f));
	objectFactory->createObject(Types::ObjType::OBJ_CONCRETE_GROUND, glm::vec3(315.8f, 0.15f, 40.0f));

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_CONCRETE_GROUND); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_CONCRETE_GROUND)->scale(glm::vec3(10.0f));
	}

	// TREES
	// SIDE 1
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(0.0f, 0.0f, 17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(40.0f, 0.0f, 17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(80.0f, 0.0f, 17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(120.0f, 0.0f, 17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-40.0f, 0.0f, 17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-80.0f, 0.0f, 17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-120.0f, 0.0f, 17.0f));

	// SIDE 2
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(0.0f, 0.0f, -17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(40.0f, 0.0f, -17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(80.0f, 0.0f, -17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(120.0f, 0.0f, -17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-40.0f, 0.0f, -17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-80.0f, 0.0f, -17.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-120.0f, 0.0f, -17.0f));

	// ROUND STREET
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(170.0f, 0.0f, -40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(160.0f, 0.0f, -60.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(150.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(145.0f, 0.0f, -30.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(170.0f, 0.0f, 40.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(160.0f, 0.0f, 60.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(150.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(145.0f, 0.0f, 30.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(220.0f, 0.0f, -80.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(230.0f, 0.0f, -100.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(210.0f, 0.0f, -90.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(280.0f, 0.0f, -110.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(350.0f, 0.0f, -80.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(380.0f, 0.0f, -70.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(340.0f, 0.0f, -60.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(370.0f, 0.0f, -10.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(220.0f, 0.0f, 80.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(230.0f, 0.0f, 100.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(210.0f, 0.0f, 90.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(280.0f, 0.0f, 110.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(350.0f, 0.0f, 80.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(380.0f, 0.0f, 70.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(340.0f, 0.0f, 60.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(370.0f, 0.0f, 10.0f));

	// CORNERS
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-140.0f, 0.0f, 70.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-150.0f, 0.0f, 65.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-160.0f, 0.0f, 80.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-175.0f, 0.0f, 60.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-170.0f, 0.0f, 55.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-160.0f, 0.0f, 50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-140.0f, 0.0f, 45.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-140.0f, 0.0f, 30.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-165.0f, 0.0f, 25.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-175.0f, 0.0f, 45.0f));

	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-140.0f, 0.0f, -70.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-150.0f, 0.0f, -65.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-160.0f, 0.0f, -80.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-175.0f, 0.0f, -60.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-170.0f, 0.0f, -55.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-160.0f, 0.0f, -50.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-140.0f, 0.0f, -45.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-140.0f, 0.0f, -30.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-165.0f, 0.0f, -25.0f));
	objectFactory->createObject(Types::ObjType::OBJ_TREE, glm::vec3(-175.0f, 0.0f, -45.0f));

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_TREE); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_TREE)->scale(glm::vec3(0.4f));
	}

	// ZOMBIES
	objectFactory->createObject(Types::ObjType::OBJ_ZOMBIE, glm::vec3(-200.0f, 0.0f, 5.0f));
	objectManager->getObject(objectManager->getObjectCount(Types::ObjType::OBJ_ZOMBIE) - 1, Types::ObjType::OBJ_ZOMBIE)->rotate(90.0f, glm::vec3(0.0f, 1.0f, 0.0f));

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_ZOMBIE); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_ZOMBIE)->scale(glm::vec3(3.0f));
	}
}


void Application::error_callback(int error, const char* description) { fputs(description, stderr); }

void Application::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
	printf("key_callback [%d,%d,%d,%d] \n", key, scancode, action, mods);

	if (key == GLFW_KEY_1 && action == GLFW_PRESS)
	{
		camera->setCameraPos(glm::vec3(0.0f, 2.0f, 15.0f));
	}

	if (key == GLFW_KEY_2 && action == GLFW_PRESS)
	{
		camera->setCameraPos(glm::vec3(0.0f, 2540.0f, 0.0f));
	}
}

void Application::window_focus_callback(GLFWwindow* window, int focused) { printf("window_focus_callback \n"); }

void Application::window_iconify_callback(GLFWwindow* window, int iconified) { printf("window_iconify_callback \n"); }

void Application::window_size_callback(GLFWwindow* window, int width, int height) {
	printf("resize %d, %d \n", width, height);
	glViewport(0, 0, width, height);
}

void Application::cursor_callback(GLFWwindow* window, double x, double y) 
{
	if (firstMouse)
	{
		mouseLastX = x;
		mouseLastY = y;
		firstMouse = false;
	}

	float xoffset = x - mouseLastX;
	float yoffset = mouseLastY - y;
	mouseLastX = x;
	mouseLastY = y;

	xoffset *= mouseSensitivity;
	yoffset *= mouseSensitivity;

	cameraYaw += xoffset;
	cameraPitch += yoffset;

	if (cameraPitch > 89.0f)
		cameraPitch = 89.0f;
	if (cameraPitch < -89.0f)
		cameraPitch = -89.0f;

	glm::vec3 direction;
	direction.x = cos(glm::radians(cameraYaw)) * cos(glm::radians(cameraPitch));
	direction.y = sin(glm::radians(cameraPitch));
	direction.z = sin(glm::radians(cameraYaw)) * cos(glm::radians(cameraPitch));
	camera->setCameraFront(glm::normalize(direction));

	printf("cursor_callback %f %f\n", x, y); 
}

void Application::button_callback(GLFWwindow* window, int button, int action, int mode) {
	if (action == GLFW_PRESS) printf("button_callback [%d,%d,%d]\n", button, action, mode);
}

void Application::registerCallbacks(GLFWwindow* window)
{
	// Sets the key callback
	//glfwSetKeyCallback(window, key_callback);
	glfwSetKeyCallback(window, [](GLFWwindow* window, int key, int scancode, int action, int mods)-> void {(&Application::getInstance())->key_callback(window, key, scancode, action, mods); });

	//glfwSetCursorPosCallback(window, cursor_callback);
	glfwSetCursorPosCallback(window, [](GLFWwindow* window, double x, double y)-> void {(&Application::getInstance())->cursor_callback(window, x, y); });

	//glfwSetMouseButtonCallback(window, button_callback);
	glfwSetMouseButtonCallback(window, [](GLFWwindow* window, int button, int action, int mode)-> void {(&Application::getInstance())->button_callback(window, button, action, mode); });

	//glfwSetWindowFocusCallback(window, window_focus_callback);
	glfwSetWindowFocusCallback(window, [](GLFWwindow* window, int focused)-> void {(&Application::getInstance())->window_focus_callback(window, focused); });

	//glfwSetWindowIconifyCallback(window, window_iconify_callback);
	glfwSetWindowIconifyCallback(window, [](GLFWwindow* window, int iconified)-> void {(&Application::getInstance())->window_iconify_callback(window, iconified); });

	//glfwSetWindowSizeCallback(window, window_size_callback);
	glfwSetWindowSizeCallback(window, [](GLFWwindow* window, int width, int height)-> void {(&Application::getInstance())->window_size_callback(window, width, height); });
}

void Application::init()
{
	window = new Window(1280, 960, "ZPG");

	shaders.push_back(new Shader("shaders/shader1.vs", "shaders/shader1.fs"));
	shaders.push_back(new Shader("shaders/shader2.vs", "shaders/shader2.fs"));
	shaders.push_back(new Shader("shaders/shaderSkybox.vs", "shaders/shaderSkybox.fs"));
	
	camera = new Camera(window, shaders);

	for (auto i : shaders)
	{
		i->setCamera(camera);
	}


	objectFactory = new ObjectFactory(shaders);

	createObjects();

	renderer = new Renderer(camera);
	renderer->mainLoop(window->getWindow());

}

void Application::destroyObjects()
{
	delete window;
	delete renderer;
	delete objectFactory;
	delete camera;
	for (auto i : shaders)
	{
		delete i;
	}
	objectManager->destroy();
}

Application::Application()
{
	window = nullptr;
	renderer = nullptr;
	objectFactory = nullptr;
	camera = nullptr;
	objectManager = &ObjectManager::getInstance();
	deltaTime = 0.0f;
	lastFrame = 0.0f;
	mouseLastX = 400;
	mouseLastY = 300;
	cameraYaw = -90.0f;
	cameraPitch = 0.0f;
	firstMouse = true;
}