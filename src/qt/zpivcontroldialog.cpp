// Copyright (c) 2017-2018 The PIVX developers
// Copyright (c) 2018 The Cronos developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "zpivcontroldialog.h"
#include "ui_zpivcontroldialog.h"

#include "accumulators.h"
#include "main.h"
#include "walletmodel.h"

using namespace std;
using namespace libzerocoin;

std::set<std::string> ZPivControlDialog::setSelectedMints;
std::set<CMintMeta> ZPivControlDialog::setMints;

ZPivControlDialog::ZPivControlDialog(QWidget *parent) 
{
}

ZPivControlDialog::~ZPivControlDialog()
{
}

void ZPivControlDialog::setModel(WalletModel *model)
{
}

//Update the tree widget
void ZPivControlDialog::updateList()
{
}

// Update the list when a checkbox is clicked
void ZPivControlDialog::updateSelection(QTreeWidgetItem* item, int column)
{
}

// Update the Quantity and Amount display
void ZPivControlDialog::updateLabels()
{
}

std::vector<CMintMeta> ZPivControlDialog::GetSelectedMints()
{
}

// select or deselect all of the mints
void ZPivControlDialog::ButtonAllClicked()
{
}