/*
 * RobotClawBase.h
 *
 *  Created on: 18/06/2012
 *      Author: Frederico Sampaio
 */

#ifndef RobotClawBase_H_
#define RobotClawBase_H_

#include "Cylinder.h"
#include "Ring.h"
#include "RobotDimensions.h"
#include "RobotPart.h"

class RobotClawBase: public RobotPart {
private:
    Cylinder clawBase;
    Ring clawBaseJoint;
public:
    RobotClawBase(const RobotDimensions&);
    virtual ~RobotClawBase();
	virtual void draw();
};


#endif /* RobotClawBase_H_ */
