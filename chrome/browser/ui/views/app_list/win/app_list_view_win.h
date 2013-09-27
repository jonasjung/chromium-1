// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_APP_LIST_WIN_APP_LIST_VIEW_WIN_H_
#define CHROME_BROWSER_UI_VIEWS_APP_LIST_WIN_APP_LIST_VIEW_WIN_H_

#include "ui/gfx/native_widget_types.h"

class Profile;

// An AppListView that can be positioned and knows when it has lost focus.
class AppListViewWin {
 public:
  virtual ~AppListViewWin() {}
  virtual void Show() = 0;
  virtual void Hide() = 0;
  virtual void MoveNearCursor() = 0;
  virtual bool IsVisible() = 0;
  virtual void Prerender() = 0;
  virtual void RegainNextLostFocus() = 0;
  virtual gfx::NativeWindow GetWindow() = 0;
  virtual void SetProfile(Profile* profile) = 0;
};

#endif  // CHROME_BROWSER_UI_VIEWS_APP_LIST_WIN_APP_LIST_VIEW_WIN_H_
