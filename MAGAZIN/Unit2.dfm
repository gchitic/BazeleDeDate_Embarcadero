object FReceptie: TFReceptie
  Left = 0
  Top = 0
  Caption = 'FReceptie'
  ClientHeight = 420
  ClientWidth = 749
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 749
    Height = 420
    ActivePage = TabSheet1
    Align = alClient
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'RECEPTIE'
      object Panel1: TPanel
        Left = 0
        Top = 0
        Width = 741
        Height = 57
        Align = alTop
        Color = clGradientInactiveCaption
        ParentBackground = False
        TabOrder = 0
        object Label1: TLabel
          Left = 16
          Top = 10
          Width = 71
          Height = 14
          Caption = 'NR FACTURA'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
        end
        object Label2: TLabel
          Left = 128
          Top = 8
          Width = 88
          Height = 14
          Caption = 'DATA FACTURA'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
        end
        object Label3: TLabel
          Left = 254
          Top = 8
          Width = 51
          Height = 14
          Caption = 'EMITENT'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -12
          Font.Name = 'Tahoma'
          Font.Style = []
          ParentFont = False
        end
        object SpeedButton1: TSpeedButton
          Left = 663
          Top = 27
          Width = 66
          Height = 23
          Caption = 'EXECUTA'
          OnClick = SpeedButton1Click
        end
        object Edit1: TEdit
          Left = 254
          Top = 28
          Width = 403
          Height = 21
          TabOrder = 0
        end
        object Edit2: TEdit
          Left = 16
          Top = 30
          Width = 71
          Height = 21
          TabOrder = 1
        end
        object DateTimePicker1: TDateTimePicker
          Left = 119
          Top = 30
          Width = 106
          Height = 21
          Date = 44371.807146388890000000
          Time = 44371.807146388890000000
          TabOrder = 2
        end
      end
      object Panel2: TPanel
        Left = 0
        Top = 57
        Width = 741
        Height = 294
        Align = alClient
        TabOrder = 1
        object Panel4: TPanel
          Left = -4
          Top = 0
          Width = 275
          Height = 311
          Color = clGradientInactiveCaption
          ParentBackground = False
          TabOrder = 0
          object Label4: TLabel
            Left = 27
            Top = 19
            Width = 46
            Height = 14
            Caption = 'PRODUS'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -12
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentFont = False
          end
          object Label5: TLabel
            Left = 27
            Top = 67
            Width = 121
            Height = 14
            Caption = 'UNITATE DE MASURA'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -12
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentFont = False
          end
          object Label6: TLabel
            Left = 27
            Top = 114
            Width = 31
            Height = 14
            Caption = 'STOC'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -12
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentFont = False
          end
          object Label7: TLabel
            Left = 139
            Top = 114
            Width = 118
            Height = 14
            Caption = 'DATA VALABILITATE'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -12
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentFont = False
          end
          object Label8: TLabel
            Left = 27
            Top = 170
            Width = 82
            Height = 14
            Caption = 'PRET INTRARE'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -12
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentFont = False
          end
          object Label9: TLabel
            Left = 139
            Top = 170
            Width = 69
            Height = 14
            Caption = 'PRET IESIRE'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -12
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentFont = False
          end
          object SpeedButton2: TSpeedButton
            Left = 229
            Top = 38
            Width = 33
            Height = 22
            Caption = '...'
            OnClick = SpeedButton2Click
          end
          object SpeedButton3: TSpeedButton
            Left = 224
            Top = 86
            Width = 33
            Height = 22
            Caption = '...'
            OnClick = SpeedButton3Click
          end
          object SpeedButton4: TSpeedButton
            Left = 27
            Top = 224
            Width = 100
            Height = 25
            Caption = 'EXECUTA'
            OnClick = SpeedButton4Click
          end
          object SpeedButton5: TSpeedButton
            Left = 163
            Top = 224
            Width = 100
            Height = 25
            Caption = 'ANULEAZA'
            OnClick = SpeedButton5Click
          end
          object SpeedButton6: TSpeedButton
            Left = 54
            Top = 255
            Width = 175
            Height = 33
            Caption = 'URMATOAREA FACTURA'
            OnClick = SpeedButton6Click
          end
          object Edit3: TEdit
            Left = 27
            Top = 39
            Width = 200
            Height = 21
            ReadOnly = True
            TabOrder = 0
          end
          object Edit4: TEdit
            Left = 27
            Top = 87
            Width = 200
            Height = 21
            ReadOnly = True
            TabOrder = 1
          end
          object Edit5: TEdit
            Left = 27
            Top = 134
            Width = 86
            Height = 21
            TabOrder = 2
          end
          object Edit6: TEdit
            Left = 27
            Top = 190
            Width = 86
            Height = 21
            TabOrder = 3
          end
          object Edit7: TEdit
            Left = 130
            Top = 190
            Width = 86
            Height = 21
            TabOrder = 4
          end
          object DateTimePicker2: TDateTimePicker
            Left = 139
            Top = 134
            Width = 118
            Height = 21
            Date = 44371.807146388890000000
            Time = 44371.807146388890000000
            TabOrder = 5
          end
        end
        object Panel5: TPanel
          Left = 264
          Top = -2
          Width = 488
          Height = 315
          TabOrder = 1
          object DBGrid1: TDBGrid
            Left = 1
            Top = 1
            Width = 486
            Height = 313
            Align = alClient
            DataSource = dm.DSQReceptie
            Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
            TabOrder = 0
            TitleFont.Charset = DEFAULT_CHARSET
            TitleFont.Color = clWindowText
            TitleFont.Height = -11
            TitleFont.Name = 'Tahoma'
            TitleFont.Style = []
            Columns = <
              item
                Expanded = False
                FieldName = 'RECEPTIE_ID'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -11
                Font.Name = 'Tahoma'
                Font.Style = [fsBold]
                Title.Alignment = taCenter
                Title.Caption = 'Nr'
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'COD_PRODUS'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -11
                Font.Name = 'Tahoma'
                Font.Style = [fsBold]
                Title.Alignment = taCenter
                Title.Caption = 'Cod Produs'
                Width = 87
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'PRODUS'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -11
                Font.Name = 'Tahoma'
                Font.Style = [fsBold]
                Title.Alignment = taCenter
                Title.Caption = 'Produs'
                Width = 88
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'STOCK1'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -11
                Font.Name = 'Tahoma'
                Font.Style = [fsBold]
                Title.Alignment = taCenter
                Title.Caption = 'Cant.'
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'PRET_INTRARE'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -11
                Font.Name = 'Tahoma'
                Font.Style = [fsBold]
                Title.Alignment = taCenter
                Title.Caption = 'Pret prim.'
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'PRET_VANZARE'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -11
                Font.Name = 'Tahoma'
                Font.Style = [fsBold]
                Title.Alignment = taCenter
                Title.Caption = 'Pret vanz.'
                Visible = True
              end>
          end
        end
      end
      object Panel3: TPanel
        Left = 0
        Top = 351
        Width = 741
        Height = 41
        Align = alBottom
        Color = clGradientInactiveCaption
        ParentBackground = False
        TabOrder = 2
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'PRODUSE'
      ImageIndex = 1
      object Panel8: TPanel
        Left = -13
        Top = 0
        Width = 334
        Height = 393
        TabOrder = 0
        object PageControl2: TPageControl
          Left = 335
          Top = 56
          Width = 34
          Height = 193
          TabOrder = 0
        end
        object PageControl3: TPageControl
          Left = 1
          Top = 1
          Width = 332
          Height = 391
          ActivePage = TabSheet8
          Align = alClient
          TabOrder = 1
          ExplicitLeft = -3
          object TabSheet6: TTabSheet
            Caption = 'MAIN'
            object SpeedButton8: TSpeedButton
              Left = 64
              Top = 104
              Width = 145
              Height = 33
              Caption = 'SELECTEAZA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
              OnClick = SpeedButton8Click
            end
            object SpeedButton9: TSpeedButton
              Left = 64
              Top = 143
              Width = 145
              Height = 33
              Caption = 'ANULEAZA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
              OnClick = SpeedButton9Click
            end
            object SpeedButton10: TSpeedButton
              Left = 64
              Top = 215
              Width = 145
              Height = 26
              Caption = 'INREGISTREAZA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = []
              ParentFont = False
              OnClick = SpeedButton10Click
            end
            object SpeedButton11: TSpeedButton
              Left = 64
              Top = 247
              Width = 145
              Height = 26
              Caption = 'MODIFICA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = []
              ParentFont = False
              OnClick = SpeedButton11Click
            end
            object SpeedButton12: TSpeedButton
              Left = 64
              Top = 279
              Width = 145
              Height = 26
              Caption = 'ELIMINA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = []
              ParentFont = False
            end
            object GroupBox1: TGroupBox
              Left = 15
              Top = 3
              Width = 258
              Height = 81
              Caption = 'Cautare rapida'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -13
              Font.Name = 'Tahoma'
              Font.Style = []
              ParentFont = False
              TabOrder = 0
              object RB1: TRadioButton
                Left = 16
                Top = 24
                Width = 113
                Height = 17
                Caption = 'DUPA DENUMIRE'
                Checked = True
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -11
                Font.Name = 'Tahoma'
                Font.Style = []
                ParentFont = False
                TabOrder = 0
                TabStop = True
                OnClick = RB1Click
              end
              object RB2: TRadioButton
                Left = 165
                Top = 24
                Width = 113
                Height = 17
                Caption = 'DUPA COD'
                Font.Charset = DEFAULT_CHARSET
                Font.Color = clWindowText
                Font.Height = -11
                Font.Name = 'Tahoma'
                Font.Style = []
                ParentFont = False
                TabOrder = 1
                OnClick = RB1Click
              end
              object ECautare: TEdit
                Left = 16
                Top = 47
                Width = 217
                Height = 24
                TabOrder = 2
                TextHint = 'CAUTARE DUPA DENUMIRE'
                OnChange = ECautareChange
              end
            end
          end
          object TabSheet7: TTabSheet
            Caption = 'INREGISTRARE'
            ImageIndex = 1
            object Label10: TLabel
              Left = 27
              Top = 43
              Width = 119
              Height = 14
              Caption = 'DENUMIRE PRODUS'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -12
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
            end
            object Label11: TLabel
              Left = 27
              Top = 107
              Width = 81
              Height = 14
              Caption = 'COD PRODUS'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -12
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
            end
            object SpeedButton13: TSpeedButton
              Left = 80
              Top = 191
              Width = 145
              Height = 33
              Caption = 'INREGISTREAZA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
              OnClick = SpeedButton13Click
            end
            object SpeedButton14: TSpeedButton
              Left = 80
              Top = 230
              Width = 145
              Height = 33
              Caption = 'ANULEAZA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
              OnClick = SpeedButton14Click
            end
            object Edit9: TEdit
              Left = 27
              Top = 63
              Width = 254
              Height = 21
              TabOrder = 0
            end
            object Edit10: TEdit
              Left = 27
              Top = 127
              Width = 254
              Height = 21
              TabOrder = 1
            end
          end
          object TabSheet8: TTabSheet
            Caption = 'EDITARE'
            ImageIndex = 2
            object Label12: TLabel
              Left = 27
              Top = 43
              Width = 119
              Height = 14
              Caption = 'DENUMIRE PRODUS'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -12
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
            end
            object Label13: TLabel
              Left = 27
              Top = 107
              Width = 81
              Height = 14
              Caption = 'COD PRODUS'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -12
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
            end
            object SpeedButton15: TSpeedButton
              Left = 80
              Top = 191
              Width = 145
              Height = 33
              Caption = 'INREGISTREAZA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
            end
            object SpeedButton16: TSpeedButton
              Left = 80
              Top = 230
              Width = 145
              Height = 33
              Caption = 'ANULEAZA'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              ParentFont = False
              OnClick = SpeedButton16Click
            end
            object Edit11: TEdit
              Left = 27
              Top = 63
              Width = 254
              Height = 21
              TabOrder = 0
            end
            object s: TEdit
              Left = 27
              Top = 127
              Width = 254
              Height = 21
              TabOrder = 1
            end
          end
        end
      end
      object Panel9: TPanel
        Left = 312
        Top = 0
        Width = 433
        Height = 393
        TabOrder = 1
        object DBGrid3: TDBGrid
          Left = 1
          Top = 1
          Width = 431
          Height = 391
          Align = alClient
          DataSource = dm.DSQProdus
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'Tahoma'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'PRODUSE_ID'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              Title.Alignment = taCenter
              Title.Caption = 'NR'
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'COD_PRODUS'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              Title.Alignment = taCenter
              Title.Caption = 'COD PRODUS'
              Width = 126
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'DENUMIRE'
              Font.Charset = DEFAULT_CHARSET
              Font.Color = clWindowText
              Font.Height = -11
              Font.Name = 'Tahoma'
              Font.Style = [fsBold]
              Title.Alignment = taCenter
              Title.Caption = 'PRODUS'
              Width = 183
              Visible = True
            end>
        end
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'UNIT.MAS.'
      ImageIndex = 2
      object Panel6: TPanel
        Left = -4
        Top = 1
        Width = 253
        Height = 392
        TabOrder = 0
        object SpeedButton7: TSpeedButton
          Left = 48
          Top = 120
          Width = 161
          Height = 57
          Caption = 'SELECTEAZA'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -16
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          OnClick = SpeedButton7Click
        end
      end
      object Panel7: TPanel
        Left = 248
        Top = 0
        Width = 497
        Height = 393
        TabOrder = 1
        object DBGrid2: TDBGrid
          Left = 1
          Top = 1
          Width = 495
          Height = 391
          Align = alClient
          DataSource = dm.DSQUM
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'Tahoma'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'UNIT_MASURA_ID'
              Title.Alignment = taCenter
              Title.Caption = 'NR'
              Title.Font.Charset = DEFAULT_CHARSET
              Title.Font.Color = clWindowText
              Title.Font.Height = -11
              Title.Font.Name = 'Tahoma'
              Title.Font.Style = [fsBold]
              Width = 76
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ABREVIERE'
              Title.Alignment = taCenter
              Title.Font.Charset = DEFAULT_CHARSET
              Title.Font.Color = clWindowText
              Title.Font.Height = -11
              Title.Font.Name = 'Tahoma'
              Title.Font.Style = [fsBold]
              Width = 117
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'NUME'
              Title.Alignment = taCenter
              Title.Caption = 'DENUMIRE'
              Title.Font.Charset = DEFAULT_CHARSET
              Title.Font.Color = clWindowText
              Title.Font.Height = -11
              Title.Font.Name = 'Tahoma'
              Title.Font.Style = [fsBold]
              Width = 202
              Visible = True
            end>
        end
      end
    end
  end
end
