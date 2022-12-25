#ifndef CCIRC_H
#define CCIRC_H

#include "Figures/CFigure.h"

class CCircle : public CFigure
{
private:
	Point Center;
	Point rad;
public:
	CCircle(Point, Point, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
};

#endif
