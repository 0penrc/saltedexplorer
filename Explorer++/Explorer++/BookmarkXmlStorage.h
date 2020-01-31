// Copyright (C) Explorer++ Project
// SPDX-License-Identifier: GPL-3.0-only
// See LICENSE in the top level directory

#pragma once

#include "BookmarkTree.h"

namespace BookmarkXmlStorage
{
	void Load(IXMLDOMNode *parentNode, BookmarkTree *bookmarkTree);
	void Save(IXMLDOMDocument *xmlDocument, IXMLDOMElement *parentNode, BookmarkTree *bookmarkTree, int indent);
}