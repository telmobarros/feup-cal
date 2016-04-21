/*
 * Poi.h
 *
 *  Created on: Apr 21, 2016
 *      Author: Antonio
 */

#ifndef SRC_POI_H_
#define SRC_POI_H_

#include "Node.h"

enum poiType{POMPGAS,RESTAURANT,HOTEL};

class Poi {
	int  idNode;
	poiType type;
public:
	Poi(int idNode,poiType type);
	virtual ~Poi();
	const int getNode() const;
	const poiType getType() const;
};

#endif /* SRC_POI_H_ */