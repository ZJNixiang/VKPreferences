//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VKPropertyHelper : NSObject
{
    _Bool _isPrimitive;
    _Bool _isModelsArray;
    _Bool _isModel;
    NSString *_propertyName;
    NSString *_propertyAlias;
    NSString *_propertyClassName;
    Class _propertyClass;
    struct objc_property *_property;
}

@property(nonatomic) struct objc_property *property; // @synthesize property=_property;
@property(nonatomic) _Bool isModel; // @synthesize isModel=_isModel;
@property(nonatomic) _Bool isModelsArray; // @synthesize isModelsArray=_isModelsArray;
@property(nonatomic) _Bool isPrimitive; // @synthesize isPrimitive=_isPrimitive;
@property(retain, nonatomic) Class propertyClass; // @synthesize propertyClass=_propertyClass;
@property(copy, nonatomic) NSString *propertyClassName; // @synthesize propertyClassName=_propertyClassName;
@property(copy, nonatomic) NSString *propertyAlias; // @synthesize propertyAlias=_propertyAlias;
@property(copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
- (id)initWith:(struct objc_property *)arg1;

@end
