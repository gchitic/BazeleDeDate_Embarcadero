object dm: Tdm
  OldCreateOrder = False
  Height = 285
  Width = 449
  object FDConnection1: TFDConnection
    Params.Strings = (
      'Database=CURATATORIE'
      'Server=DESKTOP-R8H0JSQ'
      'OSAuthent=Yes'
      'DriverID=MSSQL')
    Connected = True
    LoginPrompt = False
    Left = 32
    Top = 16
  end
  object QMAIN: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * '
      'FROM COMANDA C INNER JOIN CLIENT CC ON C.CLIENT_ID=CC.CLIENT_ID')
    Left = 112
    Top = 24
  end
  object DSQMAIN: TDataSource
    DataSet = QMAIN
    Left = 168
    Top = 24
  end
  object QLiber: TFDQuery
    Connection = FDConnection1
    Left = 120
    Top = 88
  end
  object QComand: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'INSERT INTO COMANDA(DENUMIRE,CANTITATE,SPALAT,CALCAT,DATA_INREG,' +
        'DATA_INTOARC,CLIENT_ID,OPERATOR_ID,PRET,ACTIV)'
      
        'VALUES(:DENUMIRE,:CANTITATE,:SPALAT,:CALCAT,:DATA_INREG,:DATA_IN' +
        'TOARC,:CLIENT_ID,:OPERATOR_ID,:PRET,:ACTIV)')
    Left = 64
    Top = 88
    ParamData = <
      item
        Name = 'DENUMIRE'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CANTITATE'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'SPALAT'
        DataType = ftBoolean
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CALCAT'
        DataType = ftBoolean
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'DATA_INREG'
        DataType = ftDate
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'DATA_INTOARC'
        DataType = ftDate
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CLIENT_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'OPERATOR_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'PRET'
        DataType = ftFloat
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ACTIV'
        DataType = ftBoolean
        ParamType = ptInput
        Value = Null
      end>
  end
  object QCautare: TFDQuery
    Connection = FDConnection1
    Left = 120
    Top = 144
  end
  object DSQCautare: TDataSource
    DataSet = QCautare
    Left = 176
    Top = 144
  end
  object R1: TfrxReport
    Version = '5.3.14'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44423.515034213000000000
    ReportOptions.LastChange = 44423.536995138900000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 264
    Top = 40
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Height = 41.574830000000000000
        Top = 18.897650000000000000
        Width = 718.110700000000000000
        object Memo1: TfrxMemoView
          Align = baCenter
          Left = 315.590755000000000000
          Top = 7.559060000000000000
          Width = 86.929190000000000000
          Height = 26.456710000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -19
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Memo.UTF8W = (
            'Raport')
          ParentFont = False
        end
        object Memo23: TfrxMemoView
          Left = 404.409710000000000000
          Top = 11.338590000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          DisplayFormat.Kind = fkDateTime
        end
      end
      object PageHeader1: TfrxPageHeader
        FillType = ftBrush
        Height = 49.133890000000000000
        Top = 83.149660000000000000
        Width = 718.110700000000000000
        object Memo2: TfrxMemoView
          Top = 30.236240000000000000
          Width = 30.236240000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Nr.')
          ParentFont = False
        end
        object Memo3: TfrxMemoView
          Left = 30.236240000000000000
          Top = 30.236240000000000000
          Width = 90.708720000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Nr.comanda')
          ParentFont = False
        end
        object Memo4: TfrxMemoView
          Left = 120.944960000000000000
          Top = 30.236240000000000000
          Width = 105.826840000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Comanda')
          ParentFont = False
        end
        object Memo5: TfrxMemoView
          Left = 366.614410000000000000
          Top = 30.236240000000000000
          Width = 109.606370000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Client')
          ParentFont = False
        end
        object Memo6: TfrxMemoView
          Left = 476.220780000000000000
          Top = 30.236240000000000000
          Width = 90.708720000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Data inreg.')
          ParentFont = False
        end
        object Memo7: TfrxMemoView
          Left = 566.929500000000000000
          Top = 30.236240000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Data intoarc.')
          ParentFont = False
        end
        object Memo8: TfrxMemoView
          Left = 661.417750000000000000
          Top = 30.236240000000000000
          Width = 56.692950000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Pret')
          ParentFont = False
        end
        object Memo16: TfrxMemoView
          Left = 226.771800000000000000
          Top = 30.236240000000000000
          Width = 45.354360000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Cant.')
          ParentFont = False
        end
        object Memo17: TfrxMemoView
          Left = 272.126160000000000000
          Top = 30.236240000000000000
          Width = 49.133890000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Spalat')
          ParentFont = False
        end
        object Memo18: TfrxMemoView
          Left = 321.260050000000000000
          Top = 30.236240000000000000
          Width = 45.354360000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -15
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Calcat')
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Height = 18.897650000000000000
        Top = 192.756030000000000000
        Width = 718.110700000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object Memo9: TfrxMemoView
          Width = 30.236240000000000000
          Height = 18.897650000000000000
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[Line]')
          ParentFont = False
        end
        object Memo10: TfrxMemoView
          Left = 30.236240000000000000
          Width = 90.708720000000000000
          Height = 18.897650000000000000
          DataField = 'COMANDA_ID'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."COMANDA_ID"]')
          ParentFont = False
        end
        object Memo11: TfrxMemoView
          Left = 120.944960000000000000
          Width = 105.826840000000000000
          Height = 18.897650000000000000
          DataField = 'DENUMIRE'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."DENUMIRE"]')
          ParentFont = False
        end
        object Memo12: TfrxMemoView
          Left = 366.614410000000000000
          Width = 109.606370000000000000
          Height = 18.897650000000000000
          DataField = 'NUME_CLIENT'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."NUME_CLIENT"]')
          ParentFont = False
        end
        object Memo13: TfrxMemoView
          Left = 476.220780000000000000
          Width = 90.708720000000000000
          Height = 18.897650000000000000
          DataField = 'DATA_INREG'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."DATA_INREG"]')
          ParentFont = False
        end
        object Memo14: TfrxMemoView
          Left = 566.929500000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          DataField = 'DATA_INTOARC'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."DATA_INTOARC"]')
          ParentFont = False
        end
        object Memo15: TfrxMemoView
          Left = 661.417750000000000000
          Width = 56.692950000000000000
          Height = 18.897650000000000000
          DataField = 'PRET'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."PRET"]')
          ParentFont = False
        end
        object Memo19: TfrxMemoView
          Left = 226.771800000000000000
          Width = 45.354360000000000000
          Height = 18.897650000000000000
          DataField = 'CANTITATE'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."CANTITATE"]')
          ParentFont = False
        end
        object Memo20: TfrxMemoView
          Left = 272.126160000000000000
          Width = 49.133890000000000000
          Height = 18.897650000000000000
          DataField = 'SPALAT'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."SPALAT"]')
          ParentFont = False
        end
        object Memo21: TfrxMemoView
          Left = 321.260050000000000000
          Width = 45.354360000000000000
          Height = 18.897650000000000000
          DataField = 'CALCAT'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Font.Charset = EASTEUROPE_CHARSET
          Font.Color = clBlack
          Font.Height = -12
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            '[frxDBDataset1."CALCAT"]')
          ParentFont = False
        end
      end
      object PageFooter1: TfrxPageFooter
        FillType = ftBrush
        Height = 18.897650000000000000
        Top = 272.126160000000000000
        Width = 718.110700000000000000
        object Memo22: TfrxMemoView
          Left = 3.779530000000000000
          Width = 714.331170000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Memo.UTF8W = (
            'Pagina [Page] din [TotalPages#]')
          ParentFont = False
          Formats = <
            item
            end
            item
            end>
        end
      end
    end
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSet = QMAIN
    BCDToCurrency = False
    Left = 328
    Top = 40
  end
end
