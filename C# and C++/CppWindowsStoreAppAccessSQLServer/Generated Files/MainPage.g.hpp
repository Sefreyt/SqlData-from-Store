﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"
#include "MainPage.xaml.h"




void ::CPPWindowsStoreAppAccessSQLServer::MainPage::InitializeComponent()
{
    if (_contentLoaded)
        return;

    _contentLoaded = true;

    // Call LoadComponent on ms-appx:///MainPage.xaml
    ::Windows::UI::Xaml::Application::LoadComponent(this, ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml"), ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);

    // Get the Grid named 'ContentRoot'
    ContentRoot = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"ContentRoot"));
    // Get the Grid named 'TitleGrid'
    TitleGrid = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"TitleGrid"));
    // Get the Grid named 'Footer'
    Footer = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Footer"));
    // Get the StackPanel named 'FooterPanel'
    FooterPanel = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"FooterPanel"));
    // Get the TextBlock named 'StatusBlock'
    StatusBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"StatusBlock"));
    // Get the Grid named 'Input'
    Input = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Input"));
    // Get the Grid named 'Output'
    Output = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"Output"));
    // Get the ListView named 'lvDataTemplates'
    lvDataTemplates = safe_cast<::Windows::UI::Xaml::Controls::ListView^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"lvDataTemplates"));
    // Get the Button named 'GetButton'
    GetButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"GetButton"));
    // Get the TextBlock named 'AppName'
    AppName = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"AppName"));
    // Get the VisualState named 'DefaultLayout'
    DefaultLayout = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"DefaultLayout"));
    // Get the VisualState named 'MinimalLayout'
    MinimalLayout = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"MinimalLayout"));
    // Get the VisualState named 'PortraitLayout'
    PortraitLayout = safe_cast<::Windows::UI::Xaml::VisualState^>(static_cast<Windows::UI::Xaml::IFrameworkElement^>(this)->FindName(L"PortraitLayout"));
}

void ::CPPWindowsStoreAppAccessSQLServer::MainPage::Connect(int connectionId, Platform::Object^ target)
{
    switch (connectionId)
    {
    case 1:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::CPPWindowsStoreAppAccessSQLServer::MainPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&MainPage::HyperlinkButton_Click);
        break;
    case 2:
        (safe_cast<::Windows::UI::Xaml::Controls::Primitives::ButtonBase^>(target))->Click +=
            ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::CPPWindowsStoreAppAccessSQLServer::MainPage::*)(Platform::Object^, Windows::UI::Xaml::RoutedEventArgs^))&MainPage::GetButton_Click);
        break;
    }
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}
