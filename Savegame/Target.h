/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM_TARGET_H
#define OPENXCOM_TARGET_H

#include <string>
#include <vector>

using namespace std;

class Language;

/**
 * Base class for targets on the globe
 * with a set of radian coordinates.
 */
class Target
{
protected:
	double _lat, _lon;
	vector<Target*> _followers;
public:
	/// Creates a target.
	Target();
	/// Cleans up the target.
	virtual ~Target();
	/// Gets the target's latitude.
	double getLatitude();
	/// Sets the target's latitude.
	void setLatitude(double lat);
	/// Gets the target's longitude.
	double getLongitude();
	/// Sets the target's longitude.
	void setLongitude(double lon);
	/// Gets the target's name.
	virtual string getName(Language *lang) = 0;
	/// Gets the target's followers.
	vector<Target*> *getFollowers();
};

#endif