//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

//
// CopyFiles.xaml.h
// Declaration of the CopyFiles class
//

#pragma once
#include "CopyFiles.g.h"
#include "MainPage.g.h"

namespace Clipboard
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class CopyFiles sealed
    {
    public:
        CopyFiles();

    protected:
        virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

    private:
        SDKTemplate::MainPage^ rootPage;

        void CopyButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void PasteButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };
}
