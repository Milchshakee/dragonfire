#pragma once

class DECLSPEC_UUID("79501236-5f45-11e8-9c2d-fa7ae01bbebc") Dragonfire;
#define IID_IDgnAppSupportW __uuidof(IDgnAppSupportW)

class DragonImpl :
	public ATL::CComObjectRootEx<ATL::CComSingleThreadModel>,
	public ATL::CComCoClass<DragonImpl, &__uuidof(Dragonfire)>,
	public IDgnAppSupport
{
public:
	DECLARE_REGISTRY_RESOURCEID(IDR_DRAGON_IMPL)
	//DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DRAGON_IMPL, "{79501236-5f45-11e8-9c2d-fa7ae01bbebc}")
	DECLARE_NOT_AGGREGATABLE(DragonImpl)

	BEGIN_COM_MAP(DragonImpl)
		COM_INTERFACE_ENTRY(IDgnAppSupport)
	END_COM_MAP()

	STDMETHOD(UnRegister)();
	STDMETHOD(EndProcess)(DWORD);
	STDMETHOD(AddProcess)(DWORD, const wchar_t *, const wchar_t *, DWORD);
	STDMETHOD(Register)(IServiceProvider *);
};
