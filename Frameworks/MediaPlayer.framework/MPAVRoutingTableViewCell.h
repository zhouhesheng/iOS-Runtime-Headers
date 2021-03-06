/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPAVRoutingTableViewCellDelegate>, MPAVRoute, UILabel, UISwitch, UIView;

@interface MPAVRoutingTableViewCell : UITableViewCell {
    <MPAVRoutingTableViewCellDelegate> *_delegate;
    UILabel *_mirroringLabel;
    UIView *_mirroringSeparatorView;
    UISwitch *_mirroringSwitch;
    MPAVRoute *_route;
    bool_debugCell;
    bool_mirroringSwitchVisible;
}

@property(getter=isDebugCell) bool debugCell;
@property <MPAVRoutingTableViewCellDelegate> * delegate;
@property bool mirroringSwitchVisible;
@property(retain) MPAVRoute * route;

- (void).cxx_destruct;
- (void)_configureLabel:(id)arg1;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (bool)_shouldShowMirroringAsEnabledForRoute:(id)arg1;
- (id)delegate;
- (bool)isDebugCell;
- (void)layoutSubviews;
- (bool)mirroringSwitchVisible;
- (id)route;
- (void)setDebugCell:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMirroringSwitchVisible:(bool)arg1 animated:(bool)arg2;
- (void)setMirroringSwitchVisible:(bool)arg1;
- (void)setRoute:(id)arg1;

@end
