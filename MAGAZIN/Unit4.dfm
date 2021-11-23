object FCEC: TFCEC
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = 'CECURI ELIBERATE'
  ClientHeight = 371
  ClientWidth = 683
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 683
    Height = 73
    Align = alTop
    TabOrder = 0
    ExplicitLeft = -1
    ExplicitTop = -5
    ExplicitWidth = 648
    object Label3: TLabel
      Left = 21
      Top = 13
      Width = 64
      Height = 13
      Caption = 'UTILIZATOR:'
    end
    object Label4: TLabel
      Left = 91
      Top = 13
      Width = 60
      Height = 13
      Caption = 'UTILIZATOR'
    end
    object Label1: TLabel
      Left = 24
      Top = 36
      Width = 49
      Height = 13
      Caption = 'De la data'
    end
    object Label2: TLabel
      Left = 205
      Top = 34
      Width = 60
      Height = 13
      Caption = 'Pana la data'
    end
    object cauta: TSpeedButton
      Left = 400
      Top = 31
      Width = 81
      Height = 22
      Caption = 'Cauta'
      OnClick = cautaClick
    end
    object SpeedButton1: TSpeedButton
      Left = 487
      Top = 31
      Width = 74
      Height = 22
      Caption = 'Raport'
      OnClick = SpeedButton1Click
    end
    object DT1: TDateTimePicker
      Left = 79
      Top = 32
      Width = 98
      Height = 21
      Date = 44397.797249687500000000
      Time = 44397.797249687500000000
      TabOrder = 0
    end
    object DT2: TDateTimePicker
      Left = 271
      Top = 32
      Width = 98
      Height = 21
      Date = 44397.797249687500000000
      Time = 44397.797249687500000000
      TabOrder = 1
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 73
    Width = 683
    Height = 257
    Align = alClient
    TabOrder = 1
    ExplicitLeft = 384
    ExplicitTop = 80
    ExplicitWidth = 185
    ExplicitHeight = 41
    object Panel4: TPanel
      Left = 1
      Top = 1
      Width = 681
      Height = 143
      Align = alClient
      TabOrder = 0
      ExplicitWidth = 646
      ExplicitHeight = 120
      object DBGrid1: TDBGrid
        Left = 1
        Top = 1
        Width = 679
        Height = 141
        Align = alClient
        DataSource = dm.DSQCec
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        OnCellClick = DBGrid1CellClick
        Columns = <
          item
            Expanded = False
            Title.Caption = 'Nr'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'NR_CEC'
            Title.Caption = 'Nr CEC'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'DATA_CEC'
            Title.Caption = 'Data CEC'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'SUMA_CEC'
            Title.Caption = 'Suma CEC'
            Visible = True
          end>
      end
    end
    object Panel5: TPanel
      Left = 1
      Top = 144
      Width = 681
      Height = 112
      Align = alBottom
      TabOrder = 1
      ExplicitWidth = 646
      object DBGrid2: TDBGrid
        Left = 1
        Top = 1
        Width = 679
        Height = 110
        Align = alClient
        TabOrder = 0
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        Columns = <
          item
            Expanded = False
            Title.Caption = 'Nr'
            Visible = True
          end
          item
            Expanded = False
            Title.Caption = 'Cod Produs'
            Visible = True
          end
          item
            Expanded = False
            Title.Caption = 'Produs'
            Visible = True
          end
          item
            Expanded = False
            Title.Caption = 'Cant.'
            Visible = True
          end
          item
            Expanded = False
            Title.Caption = 'Cost'
            Visible = True
          end
          item
            Expanded = False
            Title.Caption = 'Suma'
            Visible = True
          end
          item
            Expanded = False
            Title.Caption = 'Discount'
            Visible = True
          end
          item
            Expanded = False
            Title.Caption = 'Suma disc'
            Visible = True
          end
          item
            Expanded = False
            Title.Caption = 'Suma finala'
            Visible = True
          end>
      end
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 330
    Width = 683
    Height = 41
    Align = alBottom
    TabOrder = 2
    ExplicitLeft = 408
    ExplicitTop = 160
    ExplicitWidth = 185
  end
end
