//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibrary_Header_GroupTab_ActionButtonEventFactory, SPTUBIMobileYourLibrary_Header_GroupTab_ItemListEventFactory;

@protocol SPTUBIMobileYourLibrary_Header_GroupTabEventFactory <NSObject>
- (id <SPTUBIMobileYourLibrary_Header_GroupTab_ActionButtonEventFactory>)actionButtonFactory;
- (id <SPTUBIMobileYourLibrary_Header_GroupTab_ItemListEventFactory>)itemListFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
