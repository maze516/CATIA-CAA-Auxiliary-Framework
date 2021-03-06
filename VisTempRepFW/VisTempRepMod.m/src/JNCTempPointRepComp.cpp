//===================================================================
// COPYRIGHT Tony 2017/04/17
//===================================================================
// JNCTempPointRepComp.cpp
// Header definition of class JNCTempPointRepComp
//===================================================================
//
// Usage notes:
//
//===================================================================
//  2017/04/17 Creation: Code generated by the 3DS wizard
//===================================================================

#include "JNCTempPointRepComp.h"

CATImplementClass(JNCTempPointRepComp,Implementation,CATModelForRep3D,CATNull);

#include "TIE_JNCITempPointRep.h"
TIE_JNCITempPointRep(JNCTempPointRepComp);


//-----------------------------------------------------------------------------
// JNCTempPointRepComp : constructor
//-----------------------------------------------------------------------------
JNCTempPointRepComp::JNCTempPointRepComp():CATModelForRep3D()
{
}

//-----------------------------------------------------------------------------
// JNCTempPointRepComp : destructor
//-----------------------------------------------------------------------------
JNCTempPointRepComp::~JNCTempPointRepComp()
{
}



//------------------------------------
//	JNCITempPointRep
//------------------------------------
HRESULT JNCTempPointRepComp::CreateDefaultPoint(CATMathPoint *iOrigin,int color1,int color2,int color3, CATSymbolType SymType) 
{
	HRESULT rc = S_OK;
	_mathPt = (*iOrigin);

	CAT3DPointRep *pRepForCenter= CAT3DPointRep::CreateRep();

	CATMathPointf StartPoint(_mathPt);
	pRepForCenter->Modify(StartPoint);
	pRepForCenter->SetSymbol(SymType);
	//pRepForCenter->SetColor(TRUECOLOR);
	pRepForCenter->SetColorRGBA(color1,color2,color3,255);
	pRepForCenter->SetThickness(4);

	SetGraphicRepresentation((CATRep *)pRepForCenter);

	return S_OK;
} 
HRESULT JNCTempPointRepComp::SetGraphicRepresentation (CATRep *  iRep ) 
{
	SetRep(iRep);

	return S_OK;
} 
HRESULT JNCTempPointRepComp::GetGraphicRepresentation (CATRep **  oRep ) 
{
	(*oRep) = GiveRep();

	return S_OK;
} 
HRESULT JNCTempPointRepComp::GetPoint(CATMathPoint &ioMathPoint) 
{
	ioMathPoint = _mathPt;
	return S_OK;
} 






