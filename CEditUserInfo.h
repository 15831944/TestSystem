﻿#pragma once


// CEditUserInfo 对话框

class CEditUserInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CEditUserInfo)

public:
	CEditUserInfo(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CEditUserInfo();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EditUserInfo };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
