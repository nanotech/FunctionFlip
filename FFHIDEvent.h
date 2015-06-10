//
//  FFHIDEvent.h
//  FunctionFlip
//
//  Created by Kevin Gessner on 10/23/08.
//  Copyright (c) 2008-2010, Kevin Gessner, http://kevingessner.com
//  
//  Permission is hereby granted, free of charge, to any person obtaining
//  a copy of this software and associated documentation files (the
//  "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish,
//  distribute, sublicense, and/or sell copies of the Software, and to
//  permit persons to whom the Software is furnished to do so, subject to
//  the following conditions:
//  
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
//  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
//  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <Cocoa/Cocoa.h>
@class FFKeyboard;
@class DDHidEvent;
@class DDHidElement;

@interface FFHIDEvent : NSObject {
	DDHidEvent *event;
	FFKeyboard *keyboard;
}

+ (FFHIDEvent *)eventWithDDHidEvent:(DDHidEvent *)event fromKeyboard:(FFKeyboard *)keyboard;

- (id)initWithDDHidEvent:(DDHidEvent *)_event fromKeyboard:(FFKeyboard *)_keyboard;

@property (readonly) DDHidElement *element;
@property (strong) DDHidEvent *event;
@property (strong) FFKeyboard *keyboard;
@property (readonly) BOOL isFkeyEvent;
@property (readonly) NSString *keyId;
@property (readonly) NSString *specialId;

@end
