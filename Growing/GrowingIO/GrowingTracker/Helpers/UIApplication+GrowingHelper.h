//
//  UIApplication+GrowingHelper.h
//  GrowingTracker
//
//  Created by GrowingIO on 12/3/15.
//  Copyright (C) 2020 Beijing Yishu Technology Co., Ltd.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.


#import <UIKit/UIKit.h>

@interface UIApplication (GrowingHelper)

- (NSArray<UIWindow*>*)growingHelper_allWindows;
- (NSArray<UIWindow*>*)growingHelper_allWindowsSortedByWindowLevel;
- (NSArray<UIWindow*>*)growingHelper_allWindowsWithoutGrowingWindowSortedByWindowLevel;
- (NSArray<UIWindow*>*)growingHelper_allWindowsWithoutGrowingWindow;

- (UIImage*)growingHelper_screenshotWithGrowingWindow:(CGFloat)maxScale;
- (UIImage*)growingHelper_screenshotWithGrowingWindow:(CGFloat)maxScale block:(void(^)(CGContextRef context))block;

@end