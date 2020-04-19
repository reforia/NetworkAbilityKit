// Fill out your copyright notice in the Description page of Project Settings.
// Fog of War
// Tutorial from https://forums.unrealengine.com/community/community-content-tools-and-tutorials/26436-tutorial-fog-of-war?55650-Tutorial-Fog-Of-War=

#pragma once

/**
 * Worker thread for updating the fog of war data.
 */
class AFogOfWarManager;

class AFogOfWarWorker : public FRunnable
{
	//Thread to run the FRunnable on
	FRunnableThread* Thread;

	//Pointer to our manager
	AFogOfWarManager* Manager;

	//Thread safe counter 
	FThreadSafeCounter StopTaskCounter;

public:
	AFogOfWarWorker();
	AFogOfWarWorker(AFogOfWarManager* manager);
	virtual ~AFogOfWarWorker();

	//FRunnable interface
	virtual bool Init();
	virtual uint32 Run();
	virtual void Stop();

	//Method to perform work
	void UpdateFowTexture();

	bool bShouldUpdate = false;

	void ShutDown();
};