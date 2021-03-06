#ifndef VIOLET_AIM_H_
#define VIOLET_AIM_H_

#include "StaticObject.h"
#include "../Configuration.h"

namespace violet {

class Aim {
private:
	GLuint m_aimDListId;
	GLuint m_pointDListId;
	void constructCircle(float r);
	void constructFilledCircle(float r);
	void constructAim(float cDarkR,float cDarkG,float cDarkB,float cLightR,float cLightG,float cLightB);
public:
	Aim(Configuration* config);
	Aim(float cDarkR,float cDarkG,float cDarkB,float cLightR,float cLightG,float cLightB);
	void draw(float x, float y, float scale, float pointScale);
	virtual ~Aim();
};
}

#endif /* VIOLET_AIM_H_ */
