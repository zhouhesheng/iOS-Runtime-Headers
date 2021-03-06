/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSDictionary, NSSet, NSString;

@interface KNAnimationInfo : NSObject {
    Class mAnimationClass;
    NSSet *mValidAnimationTypes;
}

@property(readonly) Class animationClass;
@property(readonly) NSString * animationFilter;
@property(readonly) int category;
@property(readonly) NSDictionary * customAttributeDefaults;
@property(readonly) NSArray * customAttributes;
@property(readonly) NSDictionary * defaultAttributes;
@property(readonly) unsigned long long directionType;
@property(readonly) NSString * effectIdentifier;
@property(readonly) bool isDrift;
@property(readonly) NSString * localizedActionBuildName;
@property(readonly) NSString * localizedBuildInName;
@property(readonly) NSString * localizedBuildOutName;
@property(readonly) NSString * localizedTransitionName;
@property(readonly) NSSet * validAnimationTypes;

+ (id)effectIdentifiersForAnimationInfos:(id)arg1;
+ (id)localizedEffectNamesForAnimationInfos:(id)arg1 animationType:(int)arg2;

- (Class)animationClass;
- (id)animationFilter;
- (int)category;
- (id)customAttributeDefaults;
- (id)customAttributes;
- (id)customAttributesForAttributeKey:(id)arg1;
- (void)dealloc;
- (id)defaultAttributes;
- (id)description;
- (unsigned long long)directionType;
- (id)effectIdentifier;
- (unsigned long long)hash;
- (id)initWithAnimationClass:(Class)arg1;
- (bool)isDrift;
- (bool)isEqual:(id)arg1;
- (bool)isType:(int)arg1;
- (id)localizedActionBuildName;
- (id)localizedBuildInName;
- (id)localizedBuildOutName;
- (id)localizedNameForType:(int)arg1;
- (id)localizedTransitionName;
- (id)thumbnailImageNameForType:(int)arg1;
- (id)validAnimationTypes;

@end
