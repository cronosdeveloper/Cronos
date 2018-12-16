// Copyright (c) 2017-2018 The PIVX developers
// Copyright (c) 2018 The Cronos developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "privacydialog.h"
#include "ui_privacydialog.h"

#include "addressbookpage.h"
#include "addresstablemodel.h"
#include "bitcoinunits.h"
#include "coincontroldialog.h"
#include "libzerocoin/Denominations.h"
#include "optionsmodel.h"
#include "sendcoinsentry.h"
#include "walletmodel.h"
#include "coincontrol.h"
#include "zpivcontroldialog.h"
#include "spork.h"
#include "askpassphrasedialog.h"

#include <QClipboard>
#include <QSettings>
#include <utilmoneystr.h>
#include <QtWidgets>
#include <primitives/deterministicmint.h>
#include <accumulators.h>

PrivacyDialog::PrivacyDialog(QWidget* parent) : QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint | Qt::WindowCloseButtonHint),
                                                          ui(new Ui::PrivacyDialog),
                                                          walletModel(0),
                                                          currentBalance(-1)
{
}

PrivacyDialog::~PrivacyDialog()
{
    delete ui;
}

void PrivacyDialog::setModel(WalletModel* walletModel)
{
}

void PrivacyDialog::on_pasteButton_clicked()
{
}

void PrivacyDialog::on_addressBookButton_clicked()
{
}

void PrivacyDialog::on_pushButtonMintzPIV_clicked()
{
}

void PrivacyDialog::on_pushButtonMintReset_clicked()
{
}

void PrivacyDialog::on_pushButtonSpentReset_clicked()
{
}

void PrivacyDialog::on_pushButtonSpendzPIV_clicked()
{
}

void PrivacyDialog::on_pushButtonZPivControl_clicked()
{
}

void PrivacyDialog::setZPivControlLabels(int64_t nAmount, int nQuantity)
{
}

static inline int64_t roundint64(double d)
{
    return (int64_t)(d > 0 ? d + 0.5 : d - 0.5);
}

void PrivacyDialog::sendzPIV()
{
}

void PrivacyDialog::on_payTo_textChanged(const QString& address)
{
}

// Coin Control: copy label "Quantity" to clipboard
void PrivacyDialog::coinControlClipboardQuantity()
{
}

// Coin Control: copy label "Amount" to clipboard
void PrivacyDialog::coinControlClipboardAmount()
{
}

// Coin Control: button inputs -> show actual coin control dialog
void PrivacyDialog::coinControlButtonClicked()
{
}

// Coin Control: update labels
void PrivacyDialog::coinControlUpdateLabels()
{
}

bool PrivacyDialog::updateLabel(const QString& address)
{
    return false;
}

void PrivacyDialog::setBalance(const CAmount& balance, const CAmount& unconfirmedBalance, const CAmount& immatureBalance,
                               const CAmount& zerocoinBalance, const CAmount& unconfirmedZerocoinBalance, const CAmount& immatureZerocoinBalance,
                               const CAmount& watchOnlyBalance, const CAmount& watchUnconfBalance, const CAmount& watchImmatureBalance)
{
}

void PrivacyDialog::updateDisplayUnit()
{
}

void PrivacyDialog::showOutOfSyncWarning(bool fShow)
{
}

void PrivacyDialog::keyPressEvent(QKeyEvent* event)
{
    if (event->key() != Qt::Key_Escape) // press esc -> ignore
    {
        this->QDialog::keyPressEvent(event);
    } else {
        event->ignore();
    }
}

void PrivacyDialog::updateAutomintStatus()
{
}
