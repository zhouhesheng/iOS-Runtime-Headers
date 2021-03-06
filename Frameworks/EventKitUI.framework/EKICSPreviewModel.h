/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventStore, NSArray, NSData, NSMutableArray;

@interface EKICSPreviewModel : NSObject {
    int _actionsState;
    NSData *_data;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    unsigned long long _options;
    EKEventStore *_tempStore;
    NSMutableArray *_unimportedEvents;
}

@property(readonly) int actionsState;
@property(readonly) NSArray * allEvents;
@property(readonly) EKEventStore * eventStore;
@property(readonly) unsigned long long importedEventCount;
@property(readonly) NSArray * importedEvents;
@property(readonly) unsigned long long totalEventCount;
@property(readonly) unsigned long long unimportedEventCount;
@property(readonly) NSArray * unimportedEvents;

- (void).cxx_destruct;
- (int)actionsState;
- (id)allEvents;
- (id)eventStore;
- (id)importAllIntoCalendar:(id)arg1;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (unsigned long long)importedEventCount;
- (id)importedEvents;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)totalEventCount;
- (unsigned long long)unimportedEventCount;
- (id)unimportedEvents;

@end
