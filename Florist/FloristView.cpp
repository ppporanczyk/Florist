
// FloristView.cpp : implementation of the CFloristView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Florist.h"
#endif

#include "FloristDoc.h"
#include "FloristView.h"
#include "FloristDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFloristView

IMPLEMENT_DYNCREATE(CFloristView, CView)

BEGIN_MESSAGE_MAP(CFloristView, CView)
	ON_COMMAND(ID_ZAKUP, &CFloristView::OnZakup)
END_MESSAGE_MAP()

// CFloristView construction/destruction

CFloristView::CFloristView() noexcept
{
	// TODO: add construction code here

}

CFloristView::~CFloristView()
{
}

BOOL CFloristView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CFloristView drawing

void CFloristView::OnDraw(CDC* /*pDC*/)
{
	CFloristDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CFloristView diagnostics

#ifdef _DEBUG
void CFloristView::AssertValid() const
{
	CView::AssertValid();
}

void CFloristView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFloristDoc* CFloristView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFloristDoc)));
	return (CFloristDoc*)m_pDocument;
}
#endif //_DEBUG


// CFloristView message handlers


void CFloristView::OnZakup()
{
	CFloristDlg dlg;
	dlg.DoModal();
}

