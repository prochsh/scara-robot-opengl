/*
 * RobotClawBase.cpp
 *  added/Modified on 5/6/2013 by RR
 *  Created on: 15/06/2012
 *      Author: Frederico Sampaio
 */

#include "RobotClawBase.h"

RobotClawBase::RobotClawBase(const RobotDimensions& rdim)
	: RobotPart(rdim),
      clawBase(rd.clawBaseRadius, rd.clawBaseHeight),
      clawBaseJoint(rd.ringRadius, rd.ringHeight, rd.ringInnerRadius)
{

}

RobotClawBase::~RobotClawBase() {
	// TODO Auto-generated destructor stub
}

void RobotClawBase::draw() {
	glColor4dv(color);
	glPushMatrix();
        glTranslated(rd.clawBaseX, rd.clawBaseY, rd.clawBaseZ);
		glRotated(270, 1, 0, 0);
		glRotated(angle, 0, 0, 1);
        clawBase.draw();
	glPopMatrix();
    glTranslated(rd.clawBaseX, rd.clawBaseY + rd.clawBaseHeight + rd.ringRadius, rd.clawBaseZ);
	glRotated(angle, 0, 1, 0);
	glTranslated(0, 0, -rd.ringCenterZ);
    clawBaseJoint.draw();
}
