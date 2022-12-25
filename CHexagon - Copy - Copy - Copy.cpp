#include "CHexagon.h"





CHexagon::CHexagon(Point P, GfxInfo FigureGfxInfo) :CFigure(FigureGfxInfo)
{
	Center = P;
}


void CHexagon::Draw(Output* pOut) const
{
	//Call Output::DrawPoly to draw a hexagon on the screen	
	pOut->DrawPoly(Center, FigGfxInfo, Selected);
}