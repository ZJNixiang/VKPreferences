//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSString;

@interface UITextFieldSecure : UITextField
{
    _Bool _isSecure;
    NSString *_secureText;
}

@property(nonatomic) _Bool isSecure; // @synthesize isSecure=_isSecure;
@property(copy, nonatomic) NSString *secureText; // @synthesize secureText=_secureText;
- (void).cxx_destruct;
- (void)updateSecureText;

@end
