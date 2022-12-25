#include "CCircle.h"

CCircle::CCircle(Point P, Point r, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	Center = P;
	rad =r;

}


void CCircle::Draw(Output* pOut) const
{
	//Call Output::DrawCirc to draw a circle on the screen	
	pOut->DrawCirc(Center, rad, FigGfxInfo, Selected);
}