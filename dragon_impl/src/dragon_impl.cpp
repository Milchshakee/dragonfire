#include "stdafx.h"
#include "dragon_impl.h"
#include <iostream>

HRESULT DragonImpl::UnRegister()
{
	return S_OK;
}

HRESULT DragonImpl::EndProcess(DWORD)
{
	return S_OK;
}

HRESULT DragonImpl::AddProcess(DWORD, const wchar_t*, const wchar_t*, DWORD)
{
	return S_OK;
}

HRESULT DragonImpl::Register(IServiceProvider*)
{
	std::cout << "Hello World" << std::endl;
	return S_OK;
}
