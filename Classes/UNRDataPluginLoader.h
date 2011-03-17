//
//  PluginLoader.h
//  UnrealPackageExporter
//
//  Created by Adalynn Dudney on 1/8/11.
//  Copyright 2011 ADCorporation. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "Unreal.h"
#import "DataManager.h"
@class UNRControlManager, UNRObject;

@interface UNRDataPluginLoader : NSObject <NSXMLParserDelegate> {
	
}

- (id)initWithDirectory:(NSString *)path;

- (void)loadPlugin:(UNRExport *)object file:(UNRFile *)file;

@property(nonatomic, retain) NSMutableDictionary *plugins;
@property(nonatomic, assign) BOOL addData;
@property(nonatomic, retain) UNRObject *obj;
@property(nonatomic, retain) NSDictionary *dataTypes, *dataEndTypes;
@property(nonatomic, retain) NSURL *url;

@end
