/*
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import <Foundation/Foundation.h>

@class CKDataSourceState;
@protocol CKComponentProvider;
@protocol CKComponentStateListener;
@protocol CKDataSourceListener;
@protocol CKDataSourceProtocol;

CKDataSourceState *CKDataSourceTestState(Class<CKComponentProvider> provider,
                                         id<CKComponentStateListener> listener,
                                         NSUInteger numberOfSections,
                                         NSUInteger numberOfItemsPerSection,
                                         BOOL parallelBuildAndLayout = NO);

/** Returns a data source with one item and one section. */
id<CKDataSourceProtocol> CKComponentTestDataSource(Class<CKDataSourceProtocol> dataSourceClass,
                                                   Class<CKComponentProvider> provider,
                                                   id<CKDataSourceListener> listener);

NSSet *CKTestIndexPaths(NSUInteger numberOfSections, NSUInteger numberOfItemsPerSection);
