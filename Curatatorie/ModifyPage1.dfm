object FModifCom: TFModifCom
  Left = 0
  Top = 0
  Caption = 'FModifCom'
  ClientHeight = 218
  ClientWidth = 505
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 51
    Top = 16
    Width = 412
    Height = 27
    Caption = 'Introduceti numarul comenzii pe care '
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Britannic Bold'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 131
    Top = 49
    Width = 224
    Height = 27
    Caption = 'doriti sa o modificati'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Britannic Bold'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 147
    Top = 118
    Width = 81
    Height = 17
    Caption = 'Nr.comenzii:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 234
    Top = 113
    Width = 121
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Button1: TButton
    Left = 280
    Top = 168
    Width = 75
    Height = 25
    Caption = 'NEXT'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 153
    Top = 168
    Width = 75
    Height = 25
    Caption = 'BACK'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = Button2Click
  end
end
