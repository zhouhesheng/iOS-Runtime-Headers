/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingDelayedReplyContext : NSObject {
    unsigned int _replyPort;
    bool_portPassing;
}

@property bool portPassing;
@property unsigned int replyPort;

- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(bool)arg2;
- (bool)portPassing;
- (unsigned int)replyPort;
- (void)setPortPassing:(bool)arg1;
- (void)setReplyPort:(unsigned int)arg1;

@end
