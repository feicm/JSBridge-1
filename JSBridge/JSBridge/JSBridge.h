//
//  JSBridge.h
//  JSBridge
//
//  Created by Siva RamaKrishna Ravuri
//  Copyright (c) 2014 www.siva4u.com. All rights reserved.
//
// The MIT License (MIT)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//
#include "JSBInclude.h"

@interface JSBridge : NSObject <UIWebViewDelegate>

+(instancetype)jsBridgeForWebView:(UIWebView*)webView handler:(JSBHandler)handler;
+(instancetype)jsBridgeForWebView:(UIWebView*)webView webViewDelegate:(NSObject<UIWebViewDelegate>*)webViewDelegate handler:(JSBHandler)messageHandler;
+(instancetype)jsBridgeForWebView:(UIWebView*)webView webViewDelegate:(NSObject<UIWebViewDelegate>*)webViewDelegate resourceBundle:(NSBundle*)bundle handler:(JSBHandler)messageHandler;

-(void)send:(NSString *)eventName data:(id)data;
-(void)send:(NSString *)eventName data:(id)data responseCallback:(JSBResponseCallback)responseCallback;
-(void)registerEvent:(NSString *)eventName handler:(JSBHandler)handler;
-(void)deRegisterEvent:(NSString *)eventName handler:(JSBHandler)handler;

-(void)registerJavaScriptAPI:(NSObject *)instance;

@end