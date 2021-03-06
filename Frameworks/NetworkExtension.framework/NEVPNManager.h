/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEConfiguration, NEConfigurationManager, NEVPNConnection, NEVPNProtocol, NSArray, NSString;

@interface NEVPNManager : NSObject {
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
    NEVPNConnection *_connection;
    NSString *_localizedDescription;
    bool_hasLoaded;
}

@property(copy) NEConfiguration * configuration;
@property(readonly) NEConfigurationManager * configurationManager;
@property(readonly) NEVPNConnection * connection;
@property(getter=isEnabled) bool enabled;
@property bool hasLoaded;
@property(copy) NSString * localizedDescription;
@property(getter=isOnDemandEnabled) bool onDemandEnabled;
@property(copy) NSArray * onDemandRules;
@property(retain) NEVPNProtocol * protocol;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)configuration;
- (id)configurationManager;
- (id)connection;
- (bool)hasLoaded;
- (id)init;
- (id)initVPNManager;
- (bool)isEnabled;
- (bool)isOnDemandEnabled;
- (void)loadFromPreferencesWithCompletionHandler:(id)arg1;
- (id)localizedDescription;
- (id)onDemandRules;
- (id)protocol;
- (void)removeFromPreferencesWithCompletionHandler:(id)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
