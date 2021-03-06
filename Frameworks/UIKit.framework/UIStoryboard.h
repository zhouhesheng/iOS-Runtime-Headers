/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSBundle, NSDictionary, NSMutableDictionary, NSString;

@interface UIStoryboard : NSObject {
    NSBundle *bundle;
    NSString *designatedEntryPointIdentifier;
    NSDictionary *identifierToNibNameMap;
    NSMutableDictionary *identifierToUINibMap;
    NSString *storyboardFileName;
}

@property(readonly) NSBundle * bundle;
@property(readonly) NSString * designatedEntryPointIdentifier;
@property(readonly) NSDictionary * identifierToNibNameMap;
@property(readonly) NSMutableDictionary * identifierToUINibMap;
@property(readonly) NSString * name;
@property(readonly) NSString * storyboardFileName;

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;

- (id)bundle;
- (bool)containsNibNamed:(id)arg1;
- (void)dealloc;
- (id)designatedEntryPointIdentifier;
- (id)identifierForStringsFile;
- (id)identifierToNibNameMap;
- (id)identifierToUINibMap;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4;
- (id)instantiateInitialViewController;
- (id)instantiateViewControllerWithIdentifier:(id)arg1;
- (id)name;
- (id)nibForStoryboardNibNamed:(id)arg1;
- (id)nibForViewControllerWithIdentifier:(id)arg1;
- (id)storyboardFileName;

@end
