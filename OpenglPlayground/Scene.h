#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include <vector>
#include <string>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Camera.h"
#include "Shader.h"


class Scene
{
public:
	Scene();
	Scene(Camera* camera, vector<reference_wrapper<Shader>>* shaders);
	~Scene();
	virtual void render();

protected:
	Camera* camera;
	vector<reference_wrapper<Shader>>* shaders;
};

Scene::Scene()
{
	camera = nullptr;
	shaders = nullptr;
}

Scene::Scene(Camera* camera, vector<reference_wrapper<Shader>>* shaders)
{
	this->camera = camera;
	this->shaders = shaders;

}

Scene::~Scene()
{
	delete camera;
	shaders = nullptr;
}

void Scene::render()
{
	// does nothing, up to the child class to implement
}

#endif // !SCENE_H




