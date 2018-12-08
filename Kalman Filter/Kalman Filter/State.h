#pragma once
#include <iostream>

class State
{
private:
	float m_lat; float m_long; float m_feet;
	float m_deg; float m_sat; float m_gyx; 
	float m_gyy; float m_gyz; 
	
public:
	//Data
	float m_acx; float m_acy; float m_acz; 
	float m_mph; float m_time;
	
	//Calculated data
	float m_velocity; float m_kalGain; float m_estimateVel;
	float m_errEst;

	State();
	~State();
	State(const State &other); //Investigate
	void dataSet(float sensorData[12]); // Arduino data -> object
	void printDataSet();
};