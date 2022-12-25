#include "AddCircAction.h"

#include "ApplicationManager.h"

#include "GUI/Input.h"
#include "GUI/Output.h"

#include "CCircle.h"

AddCircAction::AddCircAction(ApplicationManager* pApp) :Action(pApp)
{}

void AddCircAction::ReadActionParameters()
{
	//Get a Pointer to the Input / Output Interfaces
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New Circle: Click at the center point");

	//Read center point and store in point P
	pIn->GetPointClicked(P.x, P.y);

	pOut->PrintMessage("New Circle: Click at another point to get radius");

	//Read radius point and store in point rad
	pIn->GetPointClicked(rad.x, rad.y);

	CircGfxInfo.isFilled = false;	//default is not filled
	//get drawing, filling colors and pen width from the interface
	CircGfxInfo.DrawClr = pOut->getCrntDrawColor();
	CircGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();

}

//Execute the action
void AddCircAction::Execute()
{
	//This action needs to read some parameters first
	ReadActionParameters();

	//Create a circle with the parameters read from the user
	CCircle* C = new CCircle(P, rad, CircGfxInfo);

	//Add the Circle to the list of figures
	pManager->AddFigure(C);
}

