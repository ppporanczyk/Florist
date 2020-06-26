
// FloristView.h : interface of the CFloristView class
//

#pragma once


class CFloristView : public CView
{
protected: // create from serialization only
	CFloristView() noexcept;
	DECLARE_DYNCREATE(CFloristView)

// Attributes
public:
	CFloristDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CFloristView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnZakup();
};

#ifndef _DEBUG  // debug version in FloristView.cpp
inline CFloristDoc* CFloristView::GetDocument() const
   { return reinterpret_cast<CFloristDoc*>(m_pDocument); }
#endif

